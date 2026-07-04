/* Runtime dump - TSCHStyleOwnerPropertyKey
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying>
{
    TSCHStyleOwnerPath * mStyleOwnerPath;
    int mProperty;
}

@property (readonly, nonatomic) TSCHStyleOwnerPath * styleOwnerPath;
@property (readonly, nonatomic) int property;

+ (NSString *)propertyKeyWithStyleOwnerPath:(TSCHStyleOwnerPath *)arg0 property:(int)arg1;

- (TSCHStyleOwnerPropertyKey *)initWithStyleOwnerPath:(TSCHStyleOwnerPath *)arg0 property:(int)arg1;
- (TSCHStyleOwnerPath *)styleOwnerPath;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCHStyleOwnerPropertyKey *)copyWithZone:(struct _NSZone *)arg0;
- (int)property;

@end
