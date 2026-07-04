/* Runtime dump - BWNodeDroppedSampleMessage
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeDroppedSampleMessage : BWNodeMessage
{
    BWDroppedSample * _droppedSample;
}

@property (readonly) BWDroppedSample * droppedSample;

+ (NSObject *)newMessageWithDroppedSample:(BWDroppedSample *)arg0;

- (void)dealloc;
- (BWDroppedSample *)droppedSample;
- (NSObject *)_initWithDroppedSample:(BWDroppedSample *)arg0;

@end
