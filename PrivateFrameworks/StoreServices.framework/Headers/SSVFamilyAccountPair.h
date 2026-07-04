/* Runtime dump - SSVFamilyAccountPair
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFamilyAccountPair : NSObject
{
    unsigned long long _downloaderAccountIdentifier;
    unsigned long long _familyIdentifier;
    unsigned long long _purchaserAccountIdentifier;
}

@property (readonly, nonatomic) unsigned long long downloaderAccountIdentifier;
@property (readonly, nonatomic) unsigned long long familyIdentifier;
@property (readonly, nonatomic) unsigned long long purchaserAccountIdentifier;

- (SSVFamilyAccountPair *)initWithDownloaderAccountIdentifier:(unsigned long long)arg0 purchaserAccountIdentifier:(unsigned long long)arg1 familyIdentifier:(unsigned long long)arg2;
- (unsigned long long)downloaderAccountIdentifier;
- (unsigned long long)familyIdentifier;
- (unsigned long long)purchaserAccountIdentifier;

@end
