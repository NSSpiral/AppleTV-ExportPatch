/* Runtime dump - TSPReaderReferenceInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReaderReferenceInfo : NSObject
{
    long long _objectIdentifier;
    long long _componentIdentifier;
}

@property (readonly, nonatomic) long long objectIdentifier;
@property (readonly, nonatomic) long long componentIdentifier;

+ (NSString *)newReferenceInfoWithObjectIdentifier:(long long)arg0 componentIdentifier:(long long)arg1;

- (long long)objectIdentifier;
- (long long)componentIdentifier;
- (TSPReaderReferenceInfo *)initWithObjectIdentifier:(long long)arg0 componentIdentifier:(long long)arg1;
- (TSPReaderReferenceInfo *)init;

@end
