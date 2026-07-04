/* Runtime dump - TCNamedData
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCNamedData : NSObject
{
    NSData * mData;
    NSString * mName;
}

@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) NSString * name;

+ (NSData *)namedDataWithData:(NSData *)arg0 named:(NSString *)arg1;

- (void)dealloc;
- (NSString *)name;
- (NSData *)data;
- (TCNamedData *)initWithData:(NSData *)arg0 named:(NSString *)arg1;

@end
