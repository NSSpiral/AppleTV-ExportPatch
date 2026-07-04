/* Runtime dump - SCNProgramSemanticInfo
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding>
{
    NSString * _semantic;
    NSDictionary * _options;
}

@property (copy, nonatomic) NSString * semantic;
@property (retain, nonatomic) NSDictionary * options;

+ (SCNProgramSemanticInfo *)infoWithSemantic:(NSString *)arg0 options:(NSDictionary *)arg1;
+ (char)supportsSecureCoding;

- (NSString *)semantic;
- (void)setSemantic:(NSString *)arg0;
- (SCNProgramSemanticInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;

@end
