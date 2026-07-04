/* Runtime dump - OCPPackageRelationship
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPPackageRelationship : NSObject
{
    NSString * mIdentifier;
    NSString * mType;
    int mTargetMode;
    NSURL * mTargetLocation;
}

- (void)dealloc;
- (NSString *)identifier;
- (NSString *)type;
- (NSObject *)targetLocation;
- (int)targetMode;
- (void)readFromElement:(struct _xmlNode *)arg0 baseLocation:(struct _xmlNode *)arg1;
- (OCPPackageRelationship *)initWithXmlElement:(struct _xmlNode *)arg0 baseLocation:(struct _xmlNode *)arg1;

@end
