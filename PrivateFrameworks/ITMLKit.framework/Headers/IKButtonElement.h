/* Runtime dump - IKButtonElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKButtonElement : IKViewElement

@property (readonly, nonatomic) int buttonType;
@property (readonly, retain, nonatomic) IKTextElement * text;
@property (readonly, copy, nonatomic) NSString * confirmationText;
@property (readonly, retain, nonatomic) IKImageElement * image;

- (IKTextElement *)text;
- (IKImageElement *)image;
- (int)buttonType;
- (NSString *)confirmationText;

@end
