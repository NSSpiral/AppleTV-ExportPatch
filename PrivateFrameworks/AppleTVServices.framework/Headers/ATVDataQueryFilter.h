/* Runtime dump - ATVDataQueryFilter
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataQueryFilter : NSObject <ATVDataBaseQueryFilter>
{
    NSString * _property;
    int _op;
    id _value;
}

@property (retain, nonatomic) NSString * property;
@property (nonatomic) int op;
@property (retain, nonatomic) id value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)filterWithProperty:(NSString *)arg0 op:(int)arg1 value:(NSObject *)arg2;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;
- (char)isQueryFilter;
- (int)op;
- (ATVDataQueryFilter *)initWithProperty:(NSString *)arg0 op:(int)arg1 value:(NSObject *)arg2;
- (void)setOp:(int)arg0;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;

@end
