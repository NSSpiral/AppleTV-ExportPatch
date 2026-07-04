/* Runtime dump - IKMediaElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKMediaElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray * assets;
@property (readonly, nonatomic) unsigned int scrubBehavior;
@property (readonly, nonatomic) IKViewElement * relatedContent;

- (unsigned int)scrubBehavior;
- (IKViewElement *)relatedContent;
- (NSArray *)assets;

@end
