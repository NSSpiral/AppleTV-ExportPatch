/* Runtime dump - BRCBookmark
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCBookmark : NSObject
{
    BRCAccountSession * _session;
    BRCLocalContainer * _container;
    NSData * _bookmarkData;
    BRCDocumentItem * _target;
    BRCServerZone * _targetServerZone;
    BRCRelativePath * _targetRelpath;
    char _targetResolved;
    char _dataResolved;
    char _containsItemID;
}

@property (readonly, nonatomic) char containsItemID;
@property (readonly, nonatomic) BRCServerZone * targetServerZone;
@property (readonly, nonatomic) BRCDocumentItem * target;

+ (void)unlinkAliasAtPath:(NSString *)arg0;
+ (NSString *)createName;

- (BRCDocumentItem *)target;
- (void).cxx_destruct;
- (BRCBookmark *)initWithTarget:(BRCDocumentItem *)arg0 owningContainer:(NSObject *)arg1 path:(NSString *)arg2 session:(BRCAccountSession *)arg3;
- (char)resolveWithError:(id *)arg0;
- (NSObject *)writeUnderParent:(NSObject *)arg0 name:(NSString *)arg1 error:(id *)arg2;
- (BRCBookmark *)initWithRelpath:(BRCRelativePath *)arg0;
- (void)_computeSignature:(NSObject *)arg0;
- (int)_validateSignatureWithFd:(int)arg0;
- (char)_resolveTargetWithError:(id *)arg0;
- (char)_resolveDataWithError:(id *)arg0;
- (char)containsItemID;
- (BRCServerZone *)targetServerZone;

@end
