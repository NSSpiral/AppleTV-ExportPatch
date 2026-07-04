/* Runtime dump - TSDMagicMoveMatchingEngine
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveMatchingEngine : NSObject
{
    NSMutableArray * _matches;
}

+ (TSDMagicMoveMatchingEngine *)matchingEngine;

- (void)addMatch:(GKMatch *)arg0;
- (void)addMatches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;
- (void)dealloc;
- (TSDMagicMoveMatchingEngine *)init;
- (CoreDAVMatchResultsItem *)matchResults;

@end
