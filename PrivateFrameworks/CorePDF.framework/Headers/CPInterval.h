/* Runtime dump - CPInterval
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPInterval : NSObject
{
    float left;
    float right;
}

- (char)intersects:(id)arg0;
- (CPInterval *)initLeft:(float)arg0 right:(float)arg1;
- (float)left;
- (float)right;
- (char)contains:(id)arg0;
- (void)add:(int)arg0;

@end
