/* Runtime dump - TSPDigest
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDigest : NSObject <NSCopying>
{
    struct array<unsigned char, 20> _digestData;
}

@property (readonly, nonatomic) NSString * digestString;
@property (readonly, nonatomic) struct array<unsigned char, 20> * digestData;

+ (NSString *)digestWithDigestString:(NSString *)arg0;
+ (NSData *)digestFromNSData:(NSData *)arg0;

- (NSString *)digestString;
- (TSPDigest *)initWithDigestString:(NSString *)arg0;
- (TSPDigest *)initFromNSData:(NSData *)arg0;
- (TSPDigest *)initFromBytes:(void *)arg0 length:(void)arg1;
- (struct array<unsigned char, 20> *)digestData;
- (TSPDigest *)initFromSHA1Context:(struct CC_SHA1state_st *)arg0;
- (TSPDigest *)initFromProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)arg0;
- (void)saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)arg0;
- (TSPDigest *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSPDigest *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
