/* Runtime dump - MPDocumentInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPDocumentInternal : NSObject
{
    NSString * uuid;
    NSString * lastRandomTransition;
    NSMutableDictionary * orderedRandomTransitions;
    NSRecursiveLock * propertiesLock;
    MPLayerGroup * documentLayerGroup;
    char savesPathsAsAbsolute;
    char assetLogging;
    NSMutableDictionary * cachedAbsolutePaths;
    NSMutableDictionary * cachedAbsoluteStillPaths;
    NSLock * cachedPathLock;
    NSUndoManager * undoManager;
    NSURL * fileURL;
    int batchModifyCount;
    char isInBatchModify;
    char needsActionConfigure;
    NSMutableDictionary * cachedActionableLayers;
    char cacheAbsolutePathOverride;
    char alwaysLookupAbsolutePaths;
}

@property (retain, nonatomic) NSString * lastRandomTransition;
@property (retain, nonatomic) NSMutableDictionary * orderedRandomTransitions;
@property (retain, nonatomic) NSRecursiveLock * propertiesLock;
@property (retain, nonatomic) MPLayerGroup * documentLayerGroup;
@property (nonatomic) char savesPathsAsAbsolute;
@property (nonatomic) char assetLogging;
@property (retain, nonatomic) NSMutableDictionary * cachedAbsolutePaths;
@property (retain, nonatomic) NSMutableDictionary * cachedAbsoluteStillPaths;
@property (retain, nonatomic) NSLock * cachedPathLock;
@property (retain, nonatomic) NSUndoManager * undoManager;
@property (nonatomic) int batchModifyCount;
@property (nonatomic) char isInBatchModify;
@property (nonatomic) char needsActionConfigure;
@property (retain, nonatomic) NSMutableDictionary * cachedActionableLayers;
@property (retain, nonatomic) NSURL * fileURL;
@property (copy, nonatomic) NSString * uuid;
@property (nonatomic) char cacheAbsolutePathOverride;
@property (nonatomic) char alwaysLookupAbsolutePaths;

- (void)dealloc;
- (NSUndoManager *)undoManager;
- (NSString *)uuid;
- (NSURL *)fileURL;
- (void)setUndoManager:(NSUndoManager *)arg0;
- (MPLayerGroup *)documentLayerGroup;
- (void)setDocumentLayerGroup:(MPLayerGroup *)arg0;
- (NSString *)lastRandomTransition;
- (void)setLastRandomTransition:(NSString *)arg0;
- (NSMutableDictionary *)orderedRandomTransitions;
- (void)setOrderedRandomTransitions:(NSMutableDictionary *)arg0;
- (NSRecursiveLock *)propertiesLock;
- (void)setPropertiesLock:(NSRecursiveLock *)arg0;
- (char)savesPathsAsAbsolute;
- (void)setSavesPathsAsAbsolute:(char)arg0;
- (char)assetLogging;
- (void)setAssetLogging:(char)arg0;
- (NSMutableDictionary *)cachedAbsolutePaths;
- (void)setCachedAbsolutePaths:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)cachedAbsoluteStillPaths;
- (void)setCachedAbsoluteStillPaths:(NSMutableDictionary *)arg0;
- (NSLock *)cachedPathLock;
- (void)setCachedPathLock:(NSLock *)arg0;
- (int)batchModifyCount;
- (void)setBatchModifyCount:(int)arg0;
- (char)needsActionConfigure;
- (void)setNeedsActionConfigure:(char)arg0;
- (char)isInBatchModify;
- (void)setIsInBatchModify:(char)arg0;
- (NSMutableDictionary *)cachedActionableLayers;
- (void)setCachedActionableLayers:(NSMutableDictionary *)arg0;
- (char)cacheAbsolutePathOverride;
- (void)setCacheAbsolutePathOverride:(char)arg0;
- (char)alwaysLookupAbsolutePaths;
- (void)setAlwaysLookupAbsolutePaths:(char)arg0;
- (void)setUuid:(NSString *)arg0;
- (void)setFileURL:(NSURL *)arg0;

@end
