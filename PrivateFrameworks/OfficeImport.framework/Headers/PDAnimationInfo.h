/* Runtime dump - PDAnimationInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationInfo : NSObject
{
    PDAnimationInfoData * mEntrance;
    PDAnimationInfoData * mExit;
    PDAnimationInfoData * mMedia;
    PDMediaNode * mediaNode;
}

@property (retain, nonatomic) PDAnimationInfoData * mediaData;
@property (retain, nonatomic) PDMediaNode * mediaNode;

- (void)dealloc;
- (void)setEntranceData:(NSData *)arg0;
- (NSData *)entranceData;
- (void)setExitData:(NSData *)arg0;
- (NSData *)exitData;
- (PDMediaNode *)mediaNode;
- (void)setMediaNode:(PDMediaNode *)arg0;
- (PDAnimationInfoData *)mediaData;
- (void)setMediaData:(PDAnimationInfoData *)arg0;

@end
