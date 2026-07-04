/* Runtime dump - BWNodeErrorMessage
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeErrorMessage : BWNodeMessage
{
    BWNodeError * _nodeError;
}

@property (readonly) BWNodeError * nodeError;

+ (NSError *)newMessageWithNodeError:(BWNodeError *)arg0;

- (void)dealloc;
- (BWNodeError *)nodeError;
- (NSError *)_initWithNodeError:(BWNodeError *)arg0;

@end
