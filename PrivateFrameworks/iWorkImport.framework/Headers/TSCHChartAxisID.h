/* Runtime dump - TSCHChartAxisID
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisID : NSObject <NSCopying>
{
    int mType;
    unsigned int mOrdinal;
}

@property (readonly) int type;
@property (readonly) unsigned int ordinal;

+ (NSObject *)axisIDWithType:(int)arg0 ordinal:(unsigned int)arg1;

- (void)saveToArchive:(struct ChartAxisIDArchive *)arg0;
- (char)intersectsAxisID:(NSObject *)arg0;
- (NSString *)debuggingName;
- (TSCHChartAxisID *)initWithType:(int)arg0 ordinal:(unsigned int)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (int)type;
- (TSCHChartAxisID *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)ordinal;
- (TSCHChartAxisID *)initWithArchive:(struct ChartAxisIDArchive *)arg0;

@end
