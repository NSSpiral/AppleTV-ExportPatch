/* Runtime dump - IKListItemLockupElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKListItemLockupElement : IKViewElement

@property (readonly, nonatomic) NSString * itemHeight;
@property (readonly, retain, nonatomic) NSArray * images;
@property (readonly, retain, nonatomic) IKTextElement * title;
@property (readonly, retain, nonatomic) IKTextElement * subtitle;
@property (readonly, retain, nonatomic) NSArray * decorationImages;
@property (readonly, retain, nonatomic) IKTextElement * decorationLabel;
@property (readonly, retain, nonatomic) IKProgressIndicatorElement * progressIndicator;
@property (readonly, retain, nonatomic) IKActivityIndicatorElement * activityIndicator;
@property (readonly, retain, nonatomic) IKCheckMarkElement * checkMark;
@property (readonly, retain, nonatomic) IKOrdinalElement * ordinal;
@property (readonly, retain, nonatomic) IKViewElement * relatedContent;

- (IKTextElement *)title;
- (NSArray *)images;
- (IKTextElement *)subtitle;
- (IKActivityIndicatorElement *)activityIndicator;
- (IKViewElement *)relatedContent;
- (NSString *)itemHeight;
- (IKOrdinalElement *)ordinal;
- (NSArray *)decorationImages;
- (IKTextElement *)decorationLabel;
- (IKProgressIndicatorElement *)progressIndicator;
- (IKCheckMarkElement *)checkMark;

@end
