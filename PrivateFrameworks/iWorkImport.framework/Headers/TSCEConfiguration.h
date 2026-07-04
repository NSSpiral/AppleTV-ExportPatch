/* Runtime dump - TSCEConfiguration
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEConfiguration : NSObject
{
    id mWarnWhenFormulasReferToEmptyCells;
}

+ (TSCEConfiguration *)sharedCalculationEngineConfiguration;

- (char)warnWhenFormulasReferToEmptyCells;
- (void)setWarnWhenFormulasReferToEmptyCells:(char)arg0;
- (TSCEConfiguration *)init;

@end
