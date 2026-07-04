/* Runtime dump - MSASEnqueuedCommand
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASEnqueuedCommand : NSObject <NSCoding>
{
    NSString * _command;
    NSDictionary * _variantParam;
    NSDictionary * _invariantParam;
}

@property (copy, nonatomic) NSString * command;
@property (retain, nonatomic) NSDictionary * variantParam;
@property (retain, nonatomic) NSDictionary * invariantParam;

+ (NSString *)command;
+ (NSObject *)commandwithCommand:(NSString *)arg0 variantParam:(NSDictionary *)arg1 invariantParam:(NSDictionary *)arg2;

- (NSString *)command;
- (MSASEnqueuedCommand *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MSASEnqueuedCommand *)init;
- (void).cxx_destruct;
- (NSDictionary *)invariantParam;
- (NSDictionary *)variantParam;
- (char)canBeGroupedWithCommand:(NSString *)arg0;
- (MSASEnqueuedCommand *)initWithCommand:(NSString *)arg0 variantParam:(NSDictionary *)arg1 invariantParam:(NSDictionary *)arg2;
- (void)setCommand:(NSString *)arg0;
- (void)setVariantParam:(NSDictionary *)arg0;
- (void)setInvariantParam:(NSDictionary *)arg0;

@end
