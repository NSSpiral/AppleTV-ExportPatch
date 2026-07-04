/* Runtime dump - AutoEncodeDecodeObject
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface AutoEncodeDecodeObject : NSObject <NSCopying>
{
    NSArray * _keysToEncode;
}

@property (retain, nonatomic) NSArray * keysToEncode;

- (char)isEqualToObject:(NSObject *)arg0;
- (void)dealloc;
- (AutoEncodeDecodeObject *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (AutoEncodeDecodeObject *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)keysToEncode;
- (id)getKeysToEncode;
- (void)setKeysToEncode:(NSArray *)arg0;

@end
