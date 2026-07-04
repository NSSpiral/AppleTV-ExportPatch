/* Runtime dump - IKHeaderElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKHeaderElement : IKViewElement

@property (readonly, retain, nonatomic) IKTextElement * title;
@property (readonly, retain, nonatomic) IKTextElement * subtitle;
@property (readonly, retain, nonatomic) IKTextElement * descriptionText;
@property (readonly, retain, nonatomic) IKImageElement * image;
@property (readonly, nonatomic) int separator;

- (IKTextElement *)title;
- (IKImageElement *)image;
- (IKTextElement *)subtitle;
- (IKTextElement *)descriptionText;
- (int)separator;

@end
