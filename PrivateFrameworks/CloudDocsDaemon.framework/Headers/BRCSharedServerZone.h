/* Runtime dump - BRCSharedServerZone
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedServerZone : BRCServerZone
{
    NSString * _ownerName;
    NSString * _mangledID;
}

@property (readonly, nonatomic) char isSharedContainer;
@property (readonly, nonatomic) char isPrivateContainer;
@property (readonly, nonatomic) BRCSharedLocalContainer * container;
@property (readonly, nonatomic) NSString * mangledID;

- (BRCSharedLocalContainer *)container;
- (void).cxx_destruct;
- (NSString *)ownerName;
- (char)isPrivateContainer;
- (char)isSharedContainer;
- (BRCSharedServerZone *)initWithZoneName:(NSString *)arg0 ownerName:(NSString *)arg1 dbRowID:(unsigned long long)arg2 plist:(NSMutableDictionary *)arg3 session:(NSObject *)arg4;
- (NSString *)mangledID;
- (char)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (char)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (NSObject *)asSharedZone;

@end
