/* Runtime dump - TSCHSeriesDimension
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSeriesDimension : NSObject <NSCopying>
{
    unsigned int mSeriesIndex;
    int mAxisType;
}

@property (readonly, nonatomic) unsigned int seriesIndex;
@property (readonly, nonatomic) int axisType;

+ (NSObject *)seriesDimensionWithSeriesIndex:(unsigned int)arg0 axisType:(int)arg1;

- (TSCHSeriesDimension *)initWithSeriesIndex:(unsigned int)arg0 axisType:(int)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCHSeriesDimension *)copyWithZone:(struct _NSZone *)arg0;
- (int)axisType;
- (unsigned int)seriesIndex;

@end
