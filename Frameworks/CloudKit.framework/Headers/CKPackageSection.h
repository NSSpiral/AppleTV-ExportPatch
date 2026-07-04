/* Runtime dump - CKPackageSection
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackageSection : NSObject
{
    int _index;
    NSData * _signature;
    unsigned long long _size;
}

@property (readonly, nonatomic) int index;
@property (readonly, nonatomic) NSData * signature;
@property (nonatomic) unsigned long long size;

- (unsigned long long)size;
- (NSString *)description;
- (void)setSize:(unsigned long long)arg0;
- (int)index;
- (void).cxx_destruct;
- (NSData *)signature;
- (NSString *)CKPropertiesDescription;
- (CKPackageSection *)initWithIndex:(int)arg0 signature:(NSData *)arg1 size:(unsigned long long)arg2;

@end
