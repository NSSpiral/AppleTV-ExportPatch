/* Runtime dump - ATVDataQueryCompoundFilter
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataQueryCompoundFilter : NSObject <ATVDataBaseQueryFilter>
{
    NSArray * _dataFilters;
    int _op;
}

@property (retain, nonatomic) NSArray * dataFilters;
@property (nonatomic) int op;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (char)isQueryFilter;
- (int)op;
- (NSArray *)dataFilters;
- (void)setOp:(int)arg0;
- (void)setDataFilters:(NSArray *)arg0;
- (ATVDataQueryCompoundFilter *)initWithDataFilters:(NSArray *)arg0 op:(int)arg1;

@end
