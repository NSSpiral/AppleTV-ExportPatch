/* Runtime dump - MFDiagnostics
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator>
{
    MFWeakSet * _diagnosticsGenerators;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFDiagnostics *)sharedController;

- (void)dealloc;
- (MFDiagnostics *)init;
- (NSDictionary *)copyDiagnosticInformation;
- (void)addDiagnosticsGenerator:(id)arg0;
- (void)removeDiagnosticsGenerator:(id)arg0;

@end
