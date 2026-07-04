/* Runtime dump - CPTextBoxMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextBoxMaker : NSObject
{
    CPBody * bodyZone;
    CPZone * mainZone;
}

+ (void)promoteLayoutsIn:(id)arg0;
+ (void)boxLayoutsIn:(id)arg0;

- (void)rotateTextBox:(id)arg0;
- (char)layoutIsSliced:(id)arg0;
- (void)promoteLayoutsInCertainRegions:(id)arg0;
- (void)promoteLayoutsIn:(id)arg0;
- (void)boxLayout:(NSObject *)arg0;
- (void)boxLayoutsIn:(id)arg0;
- (void)makeBoxesWith:(id)arg0 parent:(NSObject *)arg1;
- (void)rotate:(SCNActionRotate *)arg0;

@end
