/* Runtime dump - ATVDataType
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataType : NSObject <NSCopying>
{
    NSString * _name;
    ATVDataType * _parent;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) ATVDataType * parent;

+ (void)initialize;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (ATVDataType *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (char)isKindOf:(id)arg0;
- (ATVDataType *)initWithName:(NSString *)arg0 parent:(ATVDataType *)arg1;
- (ATVDataType *)parent;
- (void)setParent:(ATVDataType *)arg0;

@end
