/* Runtime dump - MSVLoggingLevelPair
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVLoggingLevelPair : NSObject
{
    int _maxConsoleLoggingLevel;
    int _maxFileLoggingLevel;
}

@property (nonatomic) int maxConsoleLoggingLevel;
@property (nonatomic) int maxFileLoggingLevel;

+ (MSVLoggingLevelPair *)pairWithMaxConsoleLevel:(int)arg0 maxFileLevel:(int)arg1;

- (int)maxConsoleLoggingLevel;
- (int)maxFileLoggingLevel;
- (MSVLoggingLevelPair *)initWithMaxConsoleLevel:(int)arg0 maxFileLevel:(int)arg1;
- (void)setMaxConsoleLoggingLevel:(int)arg0;
- (void)setMaxFileLoggingLevel:(int)arg0;

@end
