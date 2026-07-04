/* Runtime dump - IKProgressIndicatorElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKProgressIndicatorElement : IKViewElement

@property (readonly, nonatomic) NSString * type;
@property (readonly, nonatomic) unsigned int percentage;

+ (char)shouldParseChildDOMElements;

- (NSString *)type;
- (unsigned int)percentage;

@end
