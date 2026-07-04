/* Runtime dump - OADBlip
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBlip : NSObject
{
    unsigned long mReferenceCount;
    OADSubBlip * mMainSubBlip;
    OADSubBlip * mAltSubBlip;
}

+ (NSObject *)pathExtensionForBlipType:(int)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (unsigned int *)referenceCount;
- (id)mainSubBlip;
- (void)setMainSubBlip:(id)arg0;
- (void)setAltSubBlip:(id)arg0;
- (id)altSubBlip;

@end
