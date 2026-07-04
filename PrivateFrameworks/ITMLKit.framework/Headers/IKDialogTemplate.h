/* Runtime dump - IKDialogTemplate
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDialogTemplate : IKViewElement

@property (readonly, nonatomic) unsigned int type;
@property (readonly, retain, nonatomic) IKTextElement * title;
@property (readonly, retain, nonatomic) IKTextElement * descriptionText;
@property (readonly, retain, nonatomic) NSArray * buttons;

- (unsigned int)type;
- (IKTextElement *)title;
- (NSArray *)buttons;
- (IKTextElement *)descriptionText;

@end
