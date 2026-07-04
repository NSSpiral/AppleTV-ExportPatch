/* Runtime dump - IKTimelineEventElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTimelineEventElement : IKViewElement

@property (readonly, nonatomic) double offset;
@property (readonly, retain, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) double duration;
@property (readonly, retain, nonatomic) IKViewElement * relatedContent;

- (double)duration;
- (double)offset;
- (IKViewElement *)relatedContent;
- (NSDate *)startDate;

@end
