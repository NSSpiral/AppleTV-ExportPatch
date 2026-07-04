/* Runtime dump - PLUUIDString
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLUUIDString : NSString
{
    id _uuid;
    id _uuidString;
}

+ (NSString *)UUIDString;

- (PLUUIDString *)initWithCFUUID:(struct __CFUUID *)arg0;
- (char *)UTF8String;
- (char)isEqualToString:(NSString *)arg0;
- (PLUUIDString *)init;
- (unsigned int)length;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (int)compare:(NSObject *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2 locale:(NSObject *)arg3;
- (PLUUIDString *)initWithUUID:(NSString *)arg0;
- (NSData *)UUIDData;
- (PLUUIDString *)initWithUUIDData:(NSData *)arg0;
- (struct ?)UUIDBytes;
- (PLUUIDString *)initWithCFUUIDBytes:(struct ?)arg0;

@end
