/* Runtime dump - WDStory
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDStory : NSObject
{
    OADDrawable * mHead;
    char mOle;
}

- (void)dealloc;
- (NSString *)text;
- (void)setOle:(char)arg0;
- (char)isOle;
- (WDStory *)initWithHead:(OADLineEnd *)arg0;
- (OADLineEnd *)head;

@end
