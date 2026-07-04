/* Runtime dump - DATrafficLogger
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DATrafficLogger : NSObject
{
    NSString * _filename;
}

@property (retain, nonatomic) NSString * filename;

+ (char)enabled;

- (void).cxx_destruct;
- (NSString *)filename;
- (void)setFilename:(NSString *)arg0;
- (void)_ensureCustomLogFile;
- (void)logSnippet:(SAMicroblogSnippet *)arg0;
- (void)slurpAndRemoveLookasideFile:(NSString *)arg0 prefixString:(NSString *)arg1 suffixString:(NSString *)arg2;
- (DATrafficLogger *)initWithFilename:(NSString *)arg0;

@end
