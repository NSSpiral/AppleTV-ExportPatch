/* Runtime dump - PBSlideBase
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideBase : NSObject

+ (void)mapSlideNumberPlaceholder:(id)arg0 tgtSlideBase:(id)arg1 state:(NSObject *)arg2;
+ (void)readComments:(id)arg0 slide:(KNMasterSlide *)arg1 state:(NSObject *)arg2;
+ (unsigned int)authorIdForName:(NSString *)arg0 state:(NSObject *)arg1;
+ (char)slideFollowsMasterBackground:(id)arg0;
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom *)arg0 slideBase:(/* block */ id * *)arg1 state:(/* block */ id)arg2;
+ (int)parseTransType:(int)arg0 direction:(long)arg1;
+ (NSDictionary *)newOptions:(long)arg0 transType:(int)arg1;
+ (unsigned char)mapDirection:(id)arg0;
+ (void)readDrawingGroup:(NSObject *)arg0 slide:(KNMasterSlide *)arg1 state:(NSObject *)arg2;
+ (void)readColorScheme:(NSString *)arg0 colorScheme:(OADColorScheme *)arg1 colorMap:(OADColorMap *)arg2 state:(NSObject *)arg3;

@end
