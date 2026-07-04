/* Runtime dump - TSCHStyleOwnerReference
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerReference : NSObject <NSCopying>
{
    int mType;
    unsigned int mIndex;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned int index;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) Class nonstyleClass;
@property (readonly, nonatomic) Class genericPropertyMapClass;

+ (NSObject *)styleOwnerReferenceWithType:(int)arg0 index:(unsigned int)arg1;

- (Class)styleClass;
- (Class)nonstyleClass;
- (TSCHStyleOwnerReference *)initWithStyleOwnerType:(int)arg0 index:(unsigned int)arg1;
- (Class)genericPropertyMapClass;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)type;
- (TSCHStyleOwnerReference *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)index;

@end
