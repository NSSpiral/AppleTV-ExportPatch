/* Runtime dump - IKTimelineElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTimelineElement : IKViewElement

@property (readonly, retain, nonatomic) IKTextElement * title;
@property (readonly, retain, nonatomic) NSArray * events;
@property (readonly, nonatomic) unsigned int timelineType;
@property (readonly, retain, nonatomic) NSURL * url;
@property (readonly, nonatomic) double refreshInterval;

- (NSArray *)events;
- (NSURL *)url;
- (IKTextElement *)title;
- (double)refreshInterval;
- (unsigned int)timelineType;

@end
