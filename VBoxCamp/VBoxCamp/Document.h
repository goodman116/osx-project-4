//
//  Document.h
//  VBoxCamp
//
//  Created by Dmitriy Zavorokhin on 12/26/12.
//  Copyright (c) 2012 goodman116@gmail.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument {
     NSArray *volumes;
}

@property (assign) IBOutlet NSTableView *volumesTableView;
@property (assign) IBOutlet NSTextView *detailsTextView;
@property (assign) IBOutlet NSButton *disclosureButton;
@property (readonly) NSString *vm_name;
@property (readonly) NSString *vmdk_file_name;

- (IBAction)createBootcampVM:(id)sender;
- (IBAction)refresh:(id)sender;
- (IBAction)expandCollapseLog:(id)sender;

@end
