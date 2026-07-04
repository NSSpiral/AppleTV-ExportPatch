/* Runtime dump - IKListElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKListElement : IKCollectionElement

@property (readonly, retain, nonatomic) IKViewElement * relatedContent;
@property (readonly, nonatomic) char isLeftAligned;

- (IKViewElement *)relatedContent;
- (char)isLeftAligned;

@end
