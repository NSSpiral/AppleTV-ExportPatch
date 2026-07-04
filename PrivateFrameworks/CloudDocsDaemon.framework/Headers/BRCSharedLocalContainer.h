/* Runtime dump - BRCSharedLocalContainer
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedLocalContainer : BRCLocalContainer
{
    NSString * _ownerName;
}

@property (readonly, nonatomic) char isSharedContainer;
@property (readonly, nonatomic) char isPrivateContainer;
@property (readonly, nonatomic) BRCSharedServerZone * sharedZone;

- (void).cxx_destruct;
- (NSString *)ownerName;
- (char)isPrivateContainer;
- (char)isSharedContainer;
- (BRCSharedLocalContainer *)initWithPlist:(NSMutableDictionary *)arg0 containerID:(NSObject *)arg1 ownerName:(NSString *)arg2 dbRowID:(unsigned long long)arg3 db:(struct sqlite3 *)arg4 session:(NSObject *)arg5;
- (NSObject *)asSharedContainer;
- (NSString *)pathRelativeToRoot;
- (void)setServerZone:(BRCServerZone *)arg0;
- (void)_setup;
- (BRCSharedServerZone *)sharedZone;
- (BRCSharedLocalContainer *)initForCreationWithContainerID:(NSObject *)arg0 ownerName:(NSString *)arg1 dbRowID:(unsigned long long)arg2 db:(struct sqlite3 *)arg3 session:(NSObject *)arg4;

@end
