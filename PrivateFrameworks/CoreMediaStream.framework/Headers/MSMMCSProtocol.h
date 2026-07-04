/* Runtime dump - MSMMCSProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSMMCSProtocol : NSObject <MSStorageProtocol>
{
    NSString * _personID;
    NSString * _MMCSDirPath;
    struct __MMCSEngine * _engine;
    NSString * _engineDirPath;
}

@property (readonly, nonatomic) NSString * personID;
@property (readonly, nonatomic) struct __MMCSEngine * engine;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)computeItemIDForAsset:(NSSet *)arg0;

- (void)dealloc;
- (void)deactivate;
- (void).cxx_destruct;
- (void)deactivateRemoveAllFiles:(char)arg0;
- (void)didFinishUsingAssets:(NSArray *)arg0;
- (MSMMCSProtocol *)initWithPersonID:(NSString *)arg0 path:(NSString *)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg0;
- (NSObject *)_getUTIFromItem:(unsigned long long)arg0;
- (void)_getItemDone:(unsigned long long)arg0 path:(NSString *)arg1 error:(NSError *)arg2;
- (void)_putItemDone:(unsigned long long)arg0 putReceipt:(id)arg1 error:(NSError *)arg2;
- (void)_requestCompleted;
- (struct __MMCSEngine *)engine;
- (NSString *)personID;
- (void)abort;

@end
