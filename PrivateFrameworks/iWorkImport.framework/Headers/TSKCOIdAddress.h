/* Runtime dump - TSKCOIdAddress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOIdAddress : TSKCOAddress
{
    NSString * mId;
}

@property (readonly, nonatomic) NSString * identifier;

+ (NSString *)addressWithPath:(NSString *)arg0;
+ (NSObject *)addressWithId:(NSObject *)arg0;
+ (NSString *)addressWithIdPath:(NSString *)arg0;
+ (NSString *)idFromIdPath:(NSString *)arg0;
+ (TSKCOIdAddress *)addressWithUUID:(id)arg0;
+ (NSString *)addressWithUUIDPath:(NSString *)arg0;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Address *)arg1;
- (NSString *)pathElement;
- (TSKCOIdAddress *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Address *)arg1;
- (TSKCOIdAddress *)initWithParent:(NSObject *)arg0 identifier:(NSString *)arg1;
- (void)dealloc;
- (NSString *)identifier;

@end
