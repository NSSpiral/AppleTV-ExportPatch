/* Runtime dump - NSDataDetector
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDataDetector : NSRegularExpression
{
    unsigned long long _types;
}

@property (readonly) unsigned long long checkingTypes;

+ (NSDataDetector *)dataDetectorWithTypes:(unsigned long long)arg0 error:(id *)arg1;
+ (void)initialize;

- (unsigned int)numberOfCaptureGroups;
- (void)enumerateMatchesInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2 usingBlock:(id /* block */)arg3;
- (NSDataDetector *)initWithTypes:(unsigned long long)arg0 error:(id *)arg1;
- (unsigned long long)checkingTypes;
- (void)dealloc;
- (NSDataDetector *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)options;
- (NSDataDetector *)initWithPattern:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (void)finalize;
- (TSDStrokePattern *)pattern;

@end
