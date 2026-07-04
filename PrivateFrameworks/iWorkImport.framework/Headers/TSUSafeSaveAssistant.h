/* Runtime dump - TSUSafeSaveAssistant
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUSafeSaveAssistant : NSObject
{
    NSURL * _saveURL;
    NSURL * _temporaryDirectoryURL;
    NSURL * _writeURL;
}

@property (readonly, nonatomic) NSURL * writeURL;

+ (NSURL *)temporaryDirectoryURLForWritingToURL:(NSURL *)arg0 error:(id *)arg1;
+ (char)finishWritingToURL:(NSURL *)arg0 byMovingItemAtURL:(NSURL *)arg1 addingAttributes:(NSDictionary *)arg2 error:(id *)arg3;
+ (void)removeTemporaryDirectoryAtURL:(NSURL *)arg0;
+ (void)writeAttributes:(NSDictionary *)arg0 toURL:(NSURL *)arg1;

- (void)removeTemporaryDirectory;
- (char)endSaveWithSuccess:(char)arg0 toURL:(NSURL *)arg1 addingAttributes:(NSDictionary *)arg2 error:(id *)arg3;
- (TSUSafeSaveAssistant *)initForSavingToURL:(NSURL *)arg0 error:(id *)arg1;
- (char)endSaveWithSuccess:(char)arg0 addingAttributes:(NSDictionary *)arg1 error:(id *)arg2;
- (NSURL *)writeURL;
- (void)dealloc;
- (TSUSafeSaveAssistant *)init;
- (void).cxx_destruct;

@end
