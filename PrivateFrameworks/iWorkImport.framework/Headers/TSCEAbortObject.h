/* Runtime dump - TSCEAbortObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEAbortObject : NSObject
{
    char _isAborted;
}

@property (readonly) char isAborted;

- (TSCEAbortObject *)initWithSecondsTillAbort:(int)arg0;
- (char)isAborted;

@end
