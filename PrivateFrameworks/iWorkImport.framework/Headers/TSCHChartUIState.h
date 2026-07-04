/* Runtime dump - TSCHChartUIState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartUIState : NSObject <NSCopying>
{
    char _useFullKeyboard;
    unsigned int _lastRowSelectedInCDE;
    unsigned int _lastRowCountInCDE;
    unsigned int _lastColSelectedInCDE;
    unsigned int _lastColCountInCDE;
    unsigned int _multiDataSetIndex;
}

@property (readonly, nonatomic) unsigned int lastRowSelectedInCDE;
@property (readonly, nonatomic) unsigned int lastRowCountInCDE;
@property (readonly, nonatomic) unsigned int lastColSelectedInCDE;
@property (readonly, nonatomic) unsigned int lastColCountInCDE;
@property (readonly, nonatomic) unsigned int multiDataSetIndex;
@property (readonly, nonatomic) char useFullKeyboard;

- (void)saveToArchive:(struct ChartUIState *)arg0;
- (unsigned int)multiDataSetIndex;
- (TSCHChartUIState *)initWithRowRange:(struct _NSRange)arg0 colRange:(struct _NSRange)arg1 useFullKeyboard:(char)arg2 multiDataSetIndex:(unsigned int)arg3;
- (unsigned int)lastRowSelectedInCDE;
- (unsigned int)lastRowCountInCDE;
- (unsigned int)lastColSelectedInCDE;
- (unsigned int)lastColCountInCDE;
- (char)useFullKeyboard;
- (TSCHChartUIState *)initWithRowRange:(struct _NSRange)arg0 colRange:(struct _NSRange)arg1 useFullKeyboard:(char)arg2;
- (TSCHChartUIState *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCHChartUIState *)copyWithZone:(struct _NSZone *)arg0;
- (TSCHChartUIState *)initWithArchive:(struct ChartUIState *)arg0;

@end
