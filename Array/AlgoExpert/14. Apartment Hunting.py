def apartmentHunting(blocks, reqs):
    minDistanceFromBlocks = list(map(lambda req: getMinDistances(blocks,req)),  reqs)
    maxDistanceAtBlocks = getMaxDistancesAtBlocks(blocks, minDistanceFromBlocks)
    return getIdxAtMinValue(maxDistanceAtBlocks)



def getMinDistances(blocks, req):
    minDistances = [0 for block in blocks]
    closestReqIdx = float("inf")
    for i in range(len(blocks)):
        if blocks[i][req]:
            closestReqIdx = i
        minDistances[i] = distanceBetween(i, closestReqIdx)
    
    for i in reversed(range(len(blocks))):
        if blocks[i][req]:
            closestReqIdx = i
        minDistances[i] = min(minDistances[i],distanceBetween(i, closestReqIdx))
    return minDistances

def getMaxDistancesAtBlocks(blocks, minDistanceFromBlocks):
    maxDistancesAtBlocks = [0 for block in blocks]
    for i in range(len(blocks)):
        minDistancesAtBlocks = list(map(lambda distances: distances[i], minDistanceFromBlocks))
        maxDistancesAtBlocks[i] = max(minDistancesAtBlocks)
    return maxDistancesAtBlocks

def getIdxAtMinValue(array):
    idxAtMinValue = 0
    minValue = float("inf")
    for i in range(len(array)):
        currentValue = array[i]
        if currentValue < minValue:
            minValue = currentValue
            idxAtMinValue = i
    return idxAtMinValue

def distanceBetween(a,b):
    return abs(a-b)