/* Runtime dump - KNBuildUtility
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildUtility : NSObject

+ (char)animationInfo:(KNAnimationInfo *)arg0 onInfo:(NSDictionary *)arg1 canRunSimultaneouslyWithAnimationInfo:(KNAnimationInfo *)arg2 onInfo:(NSDictionary *)arg3;
+ (int)sharedAnimationTypeForBuildChunks:(id)arg0;
+ (KNBuildUtility *)chunksInBuilds:(id)arg0;
+ (KNBuildUtility *)buildsForChunks:(id)arg0;
+ (KNBuildUtility *)uniqueBuildsOrderedByChunks:(id)arg0;
+ (KNBuildUtility *)chunksForInfos:(id)arg0;
+ (KNBuildUtility *)orderedBuildsFromUnorderedBuilds:(id)arg0;
+ (KNBuildUtility *)buildsToChunksMapForChunks:(id)arg0;
+ (KNBuildUtility *)buildsToChunksMapForBuilds:(id)arg0 chunks:(NSArray *)arg1;
+ (KNBuildUtility *)chunksForIdentifiers:(id)arg0 context:(NSObject *)arg1;
+ (KNBuildUtility *)identifiersForChunks:(id)arg0;
+ (KNBuildUtility *)nonNilChunkIdentifierFromPossiblyNilChunk:(id)arg0;

@end
