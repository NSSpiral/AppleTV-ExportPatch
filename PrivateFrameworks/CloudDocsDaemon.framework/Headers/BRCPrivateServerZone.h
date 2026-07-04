/* Runtime dump - BRCPrivateServerZone
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPrivateServerZone : BRCServerZone
{
    BRCZonePurgeOperation * _deleteAllContentsOperation;
    NSError * _deleteAllContentsOperationLastError;
}

@property (readonly, nonatomic) char isSharedContainer;
@property (readonly, nonatomic) char isPrivateContainer;
@property (readonly, nonatomic) BRCZonePurgeOperation * deleteAllContentsOperation;
@property (readonly, nonatomic) NSError * deleteAllContentsOperationLastError;
@property (readonly, nonatomic) BRCPrivateLocalContainer * container;

- (BRCPrivateLocalContainer *)container;
- (void).cxx_destruct;
- (char)isPrivateContainer;
- (char)isSharedContainer;
- (NSObject *)itemByParentID:(NSObject *)arg0 andName:(id *)arg1;
- (char)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (char)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (void)deleteAllContentsOnServerWithCompletionBlock:(id /* block */)arg0;
- (NSObject *)asPrivateZone;
- (BRCZonePurgeOperation *)deleteAllContentsOperation;
- (void)_checkResultSetIsEmpty:(id)arg0 logToFile:(struct __sFILE *)arg1 reason:(int)arg2 result:(void *)arg3;
- (NSError *)deleteAllContentsOperationLastError;

@end
